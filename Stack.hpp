/**
 * @file Stack.hpp
 * @brief Header file for the generic Stack class template
 *
 * This file contains the declaration AND implementation of a generic
 * stack (LIFO) data structure built on top of Container.
 *
 * Since this is a template, ALL code must be in this header file.
 *
 * Students must implement the methods marked with "Must be implemented".
 *
 * Topics covered:
 * - Class templates
 * - Composition (using Container<T> internally)
 * - Stack operations (push, pop, top)
 * - Iterator delegation
 */

#ifndef STACK_HPP
#define STACK_HPP

#include "Container.hpp"
#include <stdexcept>

namespace containers {

    template <typename T>
    class Stack {
    private:
        Container<T> container;   // Internal storage

    public:

        // Use the Container's Iterator type for iteration
        using Iterator = typename Container<T>::Iterator;

        // ============================================================
        //                       CONSTRUCTORS
        // ============================================================

        /**
         * @brief Default constructor — creates an empty stack
         * Must be implemented.
         */
        Stack() {
            // ====== Must be implemented ======
            // (hint: Container default constructor handles initialization)
        }

        /**
         * @brief Copy constructor
         * @param other The stack to copy from
         * Must be implemented.
         */
        Stack(const Stack& other) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Copy assignment operator
         * @param other The stack to assign from
         * @return Reference to this stack
         * Must be implemented.
         */
        Stack& operator=(const Stack& other) {
            // ====== Must be implemented ======
        }

        // ============================================================
        //                     STACK OPERATIONS
        // ============================================================

        /**
         * @brief Push an element onto the top of the stack
         * @param value The value to push
         * Must be implemented.
         */
        void push(const T& value) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Remove and return the top element
         * @return The value that was on top
         * @throws std::underflow_error("Stack is empty") if the stack is empty
         * Must be implemented.
         */
        T pop() {
            // ====== Must be implemented ======
        }

        /**
         * @brief Access the top element without removing it
         * @return Const reference to the top element
         * @throws std::underflow_error("Stack is empty") if the stack is empty
         * Must be implemented.
         */
        const T& top() const {
            // ====== Must be implemented ======
        }

        /**
         * @brief Access the top element (mutable)
         * @return Reference to the top element
         * @throws std::underflow_error("Stack is empty") if the stack is empty
         * Must be implemented.
         */
        T& top() {
            // ====== Must be implemented ======
        }

        // ============================================================
        //                      GETTERS (INLINE)
        // ============================================================

        /**
         * @brief Get number of elements in the stack
         */
        int size() const {
            return container.getCount();
        }

        /**
         * @brief Check if stack is empty
         */
        bool isEmpty() const {
            return container.isEmpty();
        }

        // ============================================================
        //                       ITERATOR ACCESS
        // ============================================================

        /**
         * @brief Get an iterator to the bottom of the stack
         * Allows iteration from bottom to top.
         * Must be implemented.
         */
        Iterator begin() const {
            // ====== Must be implemented ======
        }

        /**
         * @brief Get an iterator past the top of the stack
         * Must be implemented.
         */
        Iterator end() const {
            // ====== Must be implemented ======
        }
    };

} // namespace containers

#endif // STACK_HPP