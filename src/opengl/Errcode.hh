// This file was generated by a python script.
// Do not edit this file... YOUR CHANGES WILL GET OVERWRITTED...
// Edit Errors.txt instead.
#pragma once

/*
   The list of errors specific to this application.
   This file must be included BEFORE #include "Log.hh"
 */
enum class Errcode {
  FILE_READ = 0,
  FILE_WRITE,
  BZIP_FORMAT_CORRUPT,
  BZIP_READ,
  BZIP_WRITE,
  OUTOF_MEMORY,
  MULTIPLY_DEFINED,
  UNDEFINED,
  UNDEFINED_CLASS,
  UNDEFINED_TYPE,
  INITIALIZE_FREETYPE,
  FONT_LOAD,
  FONT_LOAD_GLYPH,
  DIR_NOT_FOUND,
  EXPECTED_U32,
  EXPECTED_I32,
  EXPECTED_F32,
  EXPECTED_F64,
  IMAGE_LOAD,
  MISSING_SHADER,
  FONT_SIZE_LOAD,
  IOEXCEPTION,
  ILLEGAL_SIZE,
  BAD_DATE,
  SOCKET,
  SETSOCKOPT,
  SOCKET_BIND,
  NO_BIND,
  LISTEN,
  SOCKET_SEND,
  SOCKET_RECV,
  SIGACTION,
  BAD_PROTOCOL,
  FILE_NOT_FOUND,
  PERMISSION_DENIED,
  PERMISSION_NOWRITE,
  PERMISSION_NOEXEC,
  PERMISSION_NOREAD,
  DISK_FAILURE,
  OUT_OF_DISK,
  CONNECTION_FAILURE,
  CERTIFICATE_EXPIRED,
  CERTIFICATE_INVALIDATED,
  CLIENT_INVALID,
  SERVER_INVALID,
  REPOSITORY_TAMPERED,
  CLIENT_UPDATE,
  GETADDRINFO,
  ILLEGAL_SERVLETID,
  CANNOT_CLOSE,
  STRING_TOO_LONG,
  VECTOR_MISMATCHED_LENGTHS,
  VECTOR_ZERO_LENGTH,
  MPV_FAILURE,
  NONEXISTENT_ACTION,
  BAD_ARGUMENT,
  UNIMPLEMENTED
};
