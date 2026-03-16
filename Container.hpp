/**
 * @file Container.hpp
 * @brief Header file for the generic Container class template
 *
 * This file contains the declaration AND implementation of a generic
 * dynamic array container with a custom iterator.
 *
 * Since this is a template, ALL code must be in this header file.
 *
 * Students must implement the methods marked with "Must be implemented".
 *
 * Topics covered:
 * - Class templates
 * - Nested iterator class
 * - Dynamic memory management with templates
 * - begin() / end() for range-based for loops
 */

#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <stdexcept>
#include <iostream>

namespace containers {

    template <typename T>
    class Container {
    private:
        T* data;            // Dynamic array of type T
        int capacity;       // Maximum number of elements
        int count;          // Current number of elements

        /**
         * @brief Resize the internal array (double the capacity)
         * Must be implemented.
         */
        void resize() {
            // ====== Must be implemented ======
            // 1. Create a new array with double the capacity
            // 2. Copy all elements from the old array to the new one
            // 3. Delete the old array
            // 4. Update capacity and data pointer
            // =================================
        }

    public:

        // ============================================================
        //                    NESTED ITERATOR CLASS
        // ============================================================

        /**
         * @brief Forward iterator for Container
         *
         * This iterator allows traversal of the container's elements.
         * It supports:
         * - Dereference (*it) to access the current element
         * - Pre-increment (++it) to move to the next element
         * - Inequality comparison (it1 != it2) to check if two iterators differ
         * - Equality comparison (it1 == it2) to check if two iterators are equal
         */
        class Iterator {
        private:
            T* ptr;   // Pointer to current element

        public:
            /**
             * @brief Constructor
             * @param p Pointer to the element this iterator points to
             * Must be implemented.
             */
            explicit Iterator(T* p) {
                // ====== Must be implemented ======
            }

            /**
             * @brief Dereference operator
             * @return Reference to the current element
             * Must be implemented.
             */
            T& operator*() const {
                // ====== Must be implemented ======
            }

            /**
             * @brief Pre-increment operator (++it)
             * Advances the iterator to the next element.
             * @return Reference to this iterator after increment
             * Must be implemented.
             */
            Iterator& operator++() {
                // ====== Must be implemented ======
            }

            /**
             * @brief Inequality comparison
             * @param other Another iterator to compare with
             * @return true if the iterators point to different elements
             * Must be implemented.
             */
            bool operator!=(const Iterator& other) const {
                // ====== Must be implemented ======
            }

            /**
             * @brief Equality comparison
             * @param other Another iterator to compare with
             * @return true if the iterators point to the same element
             * Must be implemented.
             */
            bool operator==(const Iterator& other) const {
                // ====== Must be implemented ======
            }
        };

        // ============================================================
        //                       CONSTRUCTORS
        // ============================================================

        /**
         * @brief Default constructor
         * Creates an empty container with initial capacity of 4.
         * Must be implemented.
         */
        Container() {
            // ====== Must be implemented ======
        }

        /**
         * @brief Parameterized constructor
         * @param initialCapacity The initial capacity (must be > 0)
         * @throws std::invalid_argument("Invalid capacity") if initialCapacity <= 0
         * Must be implemented.
         */
        explicit Container(int initialCapacity) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Copy constructor (deep copy)
         * @param other The container to copy from
         * Must be implemented.
         */
        Container(const Container& other) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Copy assignment operator
         * @param other The container to assign from
         * @return Reference to this container
         * Must handle self-assignment!
         * Must be implemented.
         */
        Container& operator=(const Container& other) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Destructor
         * Must be implemented.
         */
        ~Container() {
            // ====== Must be implemented ======
        }

        // ============================================================
        //                     ELEMENT ACCESS
        // ============================================================

        /**
         * @brief Add an element to the end of the container
         * @param value The value to add
         * Resizes if the container is full.
         * Must be implemented.
         */
        void add(const T& value) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Get element at index (read-only)
         * @param index The index (0-based)
         * @return Const reference to the element
         * @throws std::out_of_range("Index out of range") if index is out of bounds
         * Must be implemented.
         */
        const T& get(int index) const {
            // ====== Must be implemented ======
        }

        /**
         * @brief Get element at index (read-write)
         * @param index The index (0-based)
         * @return Reference to the element
         * @throws std::out_of_range("Index out of range") if index is out of bounds
         * Must be implemented.
         */
        T& get(int index) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Remove element at index, shifting remaining elements left
         * @param index The index to remove
         * @throws std::out_of_range("Index out of range") if index is out of bounds
         * Must be implemented.
         */
        void removeAt(int index) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Remove all elements (does not change capacity)
         * Must be implemented.
         */
        void clear() {
            // ====== Must be implemented ======
        }

        // ============================================================
        //                      GETTERS (INLINE)
        // ============================================================

        /**
         * @brief Get current element count
         */
        int getCount() const {
            return count;
        }

        /**
         * @brief Get current capacity
         */
        int getCapacity() const {
            return capacity;
        }

        /**
         * @brief Check if the container is empty
         */
        bool isEmpty() const {
            return count == 0;
        }

        // ============================================================
        //                       ITERATOR ACCESS
        // ============================================================

        /**
         * @brief Get an iterator to the first element
         * @return Iterator pointing to the first element
         * Must be implemented.
         */
        Iterator begin() const {
            // ====== Must be implemented ======
        }

        /**
         * @brief Get an iterator past the last element
         * @return Iterator pointing one past the last element
         * Must be implemented.
         */
        Iterator end() const {
            // ====== Must be implemented ======
        }
    };

} // namespace containers

#endif // CONTAINER_HPP