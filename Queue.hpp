/**
 * @file Queue.hpp
 * @brief Header file for the generic Queue class template
 *
 * This file contains the declaration AND implementation of a generic
 * queue (FIFO) data structure built on top of Container.
 *
 * Since this is a template, ALL code must be in this header file.
 *
 * Students must implement the methods marked with "Must be implemented".
 *
 * Topics covered:
 * - Class templates
 * - Composition (using Container<T> internally)
 * - Queue operations (enqueue, dequeue, front)
 * - Iterator delegation
 */

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "Container.hpp"
#include <stdexcept>

namespace containers {

    template <typename T>
    class Queue {
    private:
        Container<T> container;   // Internal storage

    public:

        // Use the Container's Iterator type
        using Iterator = typename Container<T>::Iterator;

        // ============================================================
        //                       CONSTRUCTORS
        // ============================================================

        /**
         * @brief Default constructor — creates an empty queue
         * Must be implemented.
         */
        Queue() {
            // ====== Must be implemented ======
        }

        /**
         * @brief Copy constructor
         * @param other The queue to copy from
         * Must be implemented.
         */
        Queue(const Queue& other) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Copy assignment operator
         * @param other The queue to assign from
         * @return Reference to this queue
         * Must be implemented.
         */
        Queue& operator=(const Queue& other) {
            // ====== Must be implemented ======
        }

        // ============================================================
        //                     QUEUE OPERATIONS
        // ============================================================

        /**
         * @brief Add an element to the back of the queue
         * @param value The value to enqueue
         * Must be implemented.
         */
        void enqueue(const T& value) {
            // ====== Must be implemented ======
        }

        /**
         * @brief Remove and return the front element
         * @return The value that was at the front
         * @throws std::underflow_error("Queue is empty") if the queue is empty
         * Must be implemented.
         */
        T dequeue() {
            // ====== Must be implemented ======
        }

        /**
         * @brief Access the front element without removing it
         * @return Const reference to the front element
         * @throws std::underflow_error("Queue is empty") if the queue is empty
         * Must be implemented.
         */
        const T& front() const {
            // ====== Must be implemented ======
        }

        /**
         * @brief Access the back element without removing it
         * @return Const reference to the back element
         * @throws std::underflow_error("Queue is empty") if the queue is empty
         * Must be implemented.
         */
        const T& back() const {
            // ====== Must be implemented ======
        }

        // ============================================================
        //                      GETTERS (INLINE)
        // ============================================================

        /**
         * @brief Get number of elements in the queue
         */
        int size() const {
            return container.getCount();
        }

        /**
         * @brief Check if queue is empty
         */
        bool isEmpty() const {
            return container.isEmpty();
        }

        // ============================================================
        //                       ITERATOR ACCESS
        // ============================================================

        /**
         * @brief Get an iterator to the front of the queue
         * Allows iteration from front to back.
         * Must be implemented.
         */
        Iterator begin() const {
            // ====== Must be implemented ======
        }

        /**
         * @brief Get an iterator past the back of the queue
         * Must be implemented.
         */
        Iterator end() const {
            // ====== Must be implemented ======
        }
    };

} // namespace containers

#endif // QUEUE_HPP