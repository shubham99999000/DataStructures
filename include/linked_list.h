/*
 * Copyright (C) 2018  Lucas S. Vieira
 *empty
  read
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LINKED_LIST
#define LINKED_LIST

#include <util.h>
#include <types.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Create a new linked list
 * @return list
 */
list *create_linked_list();

/**
 * Check if a linked list is empty
 * @param ptr
 * @return true if is empty, false otherwise
 */
bool is_empty_linked_list(list *ptr);

/**
 * Prepend an new element
 * @param ptr
 * @param elem
 * @return bool
 */
bool prepend_linked_list(list *ptr, node *elem);

/**
 * Append an new element
 * @param ptr
 * @param elem
 * @return bool
 */
bool append_linked_list(list *ptr, node *elem);

/**
 * Reverse a linked list
 * @param ptr
 * @return bool
 */
bool reverse_linked_list(list *ptr);

/**
 * Destroy a linked list
 * @param ptr
 * @return bool
 */
bool destroy_linked_list(list *ptr);

/**
 * Walk a linked list with an user defined function
 * @param ptr
 * @return bool
 */
void walk_linked_list(list *ptr, void function(node *element));

#ifdef __cplusplus
};
#endif

#endif // LINKED_LIST_H
