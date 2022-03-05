// Copyright 2022 DADi590
//
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#ifndef F1DPPATCHER_STRING_H
#define F1DPPATCHER_STRING_H



void * memset(void *s, int c, size_t n);
int strcmp(const char * s1, const char * s2);
char * strcpy(char * s1, const char * s2);
size_t strlen(const char *s);
int strncmp(const char * s1, const char * s2, size_t n);
char * strncpy(char * s1, const char * s2, size_t n);
size_t strnlen(const char * s, size_t maxlen);
char * strrchr(const char * s, int c);



#endif //F1DPPATCHER_STRING_H