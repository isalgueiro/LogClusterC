/*
 * Copyright (C) 2016 Zhuge Chen, Risto Vaarandi and Mauno Pihelgas
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
/* 
 * File:   join_clusters_heuristic.h
 * 
 * Content: Declarations of global functions in join_clusters_heuristic.c .
 *
 * Created on November 30, 2016, 6:48 AM
 */

#ifndef JOIN_CLUSTERS_HEURISTIC_H
#define JOIN_CLUSTERS_HEURISTIC_H

#ifdef __cplusplus
extern "C" {
#endif

void update_word_dep_matrix(wordnumber_t *storage, int serial,
              struct Parameters *pParam);
void step_3_join_clusters(struct Parameters *pParam);

#ifdef __cplusplus
}
#endif

#endif /* JOIN_CLUSTERS_HEURISTIC_H */

