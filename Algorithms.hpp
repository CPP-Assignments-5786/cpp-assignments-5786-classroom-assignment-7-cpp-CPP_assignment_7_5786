/**
 * @file Algorithms.hpp
 * @brief Header file for generic template utility functions
 *
 * This file contains free (non-member) template functions that operate
 * on Container, Stack, and Queue objects using their iterators.
 *
 * Since these are templates, ALL code must be in this header file.
 *
 * Students must implement the functions marked with "Must be implemented".
 *
 * Topics covered:
 * - Function templates
 * - Using iterators to write generic algorithms
 * - Template parameters for both containers and functions
 */

#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include "Container.hpp"
#include "Stack.hpp"
#include "Queue.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

namespace containers {

    // ============================================================
    //                   SEARCH & COUNT FUNCTIONS
    // ============================================================

    /**
     * @brief Find the first occurrence of a value in a Container
     * Uses the Container's iterator to traverse elements.
     * @tparam T The element type
     * @param container The container to search
     * @param value The value to find
     * @return The index of the first occurrence, or -1 if not found
     * Must be implemented.
     */
    template <typename T>
    int find(const Container<T>& container, const T& value) {
        // ====== Must be implemented ======
        // Use the iterator (begin/end) to traverse and find the value.
        // Return the index (0-based), or -1 if not found.
    }

    /**
     * @brief Count occurrences of a value in a Container
     * @tparam T The element type
     * @param container The container to search
     * @param value The value to count
     * @return The number of times value appears
     * Must be implemented.
     */
    template <typename T>
    int count(const Container<T>& container, const T& value) {
        // ====== Must be implemented ======
    }

    /**
     * @brief Check if a Container contains a value
     * @tparam T The element type
     * @param container The container to search
     * @param value The value to look for
     * @return true if value is found
     * Must be implemented.
     */
    template <typename T>
    bool contains(const Container<T>& container, const T& value) {
        // ====== Must be implemented ======
    }

    // ============================================================
    //                    PRINT FUNCTIONS
    // ============================================================

    /**
     * @brief Print all elements of a Container to an output stream
     * Format: "[e1, e2, e3, ...]"
     * Empty container: "[]"
     * @tparam T The element type
     * @param container The container to print
     * @param os The output stream (default: std::cout)
     * Must be implemented.
     */
    template <typename T>
    void print(const Container<T>& container, std::ostream& os = std::cout) {
        // ====== Must be implemented ======
    }

    /**
     * @brief Print all elements of a Stack to an output stream
     * Format: "Stack(bottom -> top): [e1, e2, e3, ...]"
     * Empty stack: "Stack(bottom -> top): []"
     * @tparam T The element type
     * @param stack The stack to print
     * @param os The output stream (default: std::cout)
     * Must be implemented.
     */
    template <typename T>
    void print(const Stack<T>& stack, std::ostream& os = std::cout) {
        // ====== Must be implemented ======
    }

    /**
     * @brief Print all elements of a Queue to an output stream
     * Format: "Queue(front -> back): [e1, e2, e3, ...]"
     * Empty queue: "Queue(front -> back): []"
     * @tparam T The element type
     * @param queue The queue to print
     * @param os The output stream (default: std::cout)
     * Must be implemented.
     */
    template <typename T>
    void print(const Queue<T>& queue, std::ostream& os = std::cout) {
        // ====== Must be implemented ======
    }

    // ============================================================
    //                   TRANSFORM FUNCTIONS
    // ============================================================

    /**
     * @brief Apply a function to every element in a Container (in-place)
     *
     * This function takes a Container and a callable (function pointer,
     * functor, or lambda) and applies it to each element.
     *
     * @tparam T The element type
     * @tparam Func The callable type
     * @param container The container to modify (passed by reference)
     * @param func The function to apply to each element
     * Must be implemented.
     *
     * Example usage:
     *   transform(c, [](int& x) { x *= 2; });
     */
    template <typename T, typename Func>
    void transform(Container<T>& container, Func func) {
        // ====== Must be implemented ======
        // Iterate over elements using index-based access (get)
        // and apply func to each element.
    }

    /**
     * @brief Create a new Container with elements that satisfy a predicate
     *
     * @tparam T The element type
     * @tparam Pred The predicate type
     * @param container The source container
     * @param pred The predicate function (returns true for elements to keep)
     * @return A new Container with only the elements where pred(element) is true
     * Must be implemented.
     *
     * Example usage:
     *   Container<int> evens = filter(c, [](const int& x) { return x % 2 == 0; });
     */
    template <typename T, typename Pred>
    Container<T> filter(const Container<T>& container, Pred pred) {
        // ====== Must be implemented ======
    }

    // ============================================================
    //                    AGGREGATE FUNCTIONS
    // ============================================================

    /**
     * @brief Calculate the sum of all elements in a Container
     *
     * @tparam T The element type (must support + operator and default construction)
     * @param container The container to sum
     * @return The sum of all elements (returns T{} for empty container)
     * Must be implemented.
     */
    template <typename T>
    T sum(const Container<T>& container) {
        // ====== Must be implemented ======
    }

    /**
     * @brief Find the minimum element in a Container
     *
     * @tparam T The element type (must support < operator)
     * @param container The container to search
     * @return The minimum element
     * @throws std::underflow_error("Container is empty") if the container is empty
     * Must be implemented.
     */
    template <typename T>
    T min(const Container<T>& container) {
        // ====== Must be implemented ======
    }

    /**
     * @brief Find the maximum element in a Container
     *
     * @tparam T The element type (must support < operator)
     * @param container The container to search
     * @return The maximum element
     * @throws std::underflow_error("Container is empty") if the container is empty
     * Must be implemented.
     */
    template <typename T>
    T max(const Container<T>& container) {
        // ====== Must be implemented ======
    }

    // ============================================================
    //                   CONVERSION FUNCTIONS
    // ============================================================

    /**
     * @brief Convert a Container to a string representation
     * Same format as print: "[e1, e2, e3, ...]"
     * Uses std::ostringstream internally.
     * @tparam T The element type
     * @param container The container to convert
     * @return The string representation
     * Must be implemented.
     */
    template <typename T>
    std::string toString(const Container<T>& container) {
        // ====== Must be implemented ======
    }

    /**
     * @brief Reverse the elements of a Container in-place
     * @tparam T The element type
     * @param container The container to reverse
     * Must be implemented.
     */
    template <typename T>
    void reverse(Container<T>& container) {
        // ====== Must be implemented ======
    }

} // namespace containers

#endif // ALGORITHMS_HPP