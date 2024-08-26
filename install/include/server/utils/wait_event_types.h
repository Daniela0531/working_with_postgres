/*-------------------------------------------------------------------------
 *
 * wait_event_types.h
 *    Generated wait events infrastructure code
 *
 * Portions Copyright (c) 1996-2024, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/backend/utils/activity/generate-wait_event_types.pl
 *
 *-------------------------------------------------------------------------
 */

#ifndef WAIT_EVENT_TYPES_H
#define WAIT_EVENT_TYPES_H

#include "utils/wait_event.h"

typedef enum
{
	WAIT_EVENT_ARCHIVER_MAIN = PG_WAIT_ACTIVITY,
	WAIT_EVENT_AUTOVACUUM_MAIN,
	WAIT_EVENT_BGWRITER_HIBERNATE,
	WAIT_EVENT_BGWRITER_MAIN,
	WAIT_EVENT_CHECKPOINTER_MAIN,
	WAIT_EVENT_LOGICAL_APPLY_MAIN,
	WAIT_EVENT_LOGICAL_LAUNCHER_MAIN,
	WAIT_EVENT_LOGICAL_PARALLEL_APPLY_MAIN,
	WAIT_EVENT_RECOVERY_WAL_STREAM,
	WAIT_EVENT_REPLICATION_SLOTSYNC_MAIN,
	WAIT_EVENT_REPLICATION_SLOTSYNC_SHUTDOWN,
	WAIT_EVENT_SYSLOGGER_MAIN,
	WAIT_EVENT_WAL_RECEIVER_MAIN,
	WAIT_EVENT_WAL_SENDER_MAIN,
	WAIT_EVENT_WAL_SUMMARIZER_WAL,
	WAIT_EVENT_WAL_WRITER_MAIN
} WaitEventActivity;

typedef enum
{
	WAIT_EVENT_BUFFER_PIN = PG_WAIT_BUFFERPIN
} WaitEventBufferPin;

typedef enum
{
	WAIT_EVENT_CLIENT_READ = PG_WAIT_CLIENT,
	WAIT_EVENT_CLIENT_WRITE,
	WAIT_EVENT_GSS_OPEN_SERVER,
	WAIT_EVENT_LIBPQWALRECEIVER_CONNECT,
	WAIT_EVENT_LIBPQWALRECEIVER_RECEIVE,
	WAIT_EVENT_SSL_OPEN_SERVER,
	WAIT_EVENT_WAIT_FOR_STANDBY_CONFIRMATION,
	WAIT_EVENT_WAIT_FOR_WAL_REPLAY,
	WAIT_EVENT_WAL_SENDER_WAIT_FOR_WAL,
	WAIT_EVENT_WAL_SENDER_WRITE_DATA
} WaitEventClient;

typedef enum
{
	WAIT_EVENT_BASEBACKUP_READ = PG_WAIT_IO,
	WAIT_EVENT_BASEBACKUP_SYNC,
	WAIT_EVENT_BASEBACKUP_WRITE,
	WAIT_EVENT_BUFFILE_READ,
	WAIT_EVENT_BUFFILE_TRUNCATE,
	WAIT_EVENT_BUFFILE_WRITE,
	WAIT_EVENT_CONTROL_FILE_READ,
	WAIT_EVENT_CONTROL_FILE_SYNC,
	WAIT_EVENT_CONTROL_FILE_SYNC_UPDATE,
	WAIT_EVENT_CONTROL_FILE_WRITE,
	WAIT_EVENT_CONTROL_FILE_WRITE_UPDATE,
	WAIT_EVENT_COPY_FILE_READ,
	WAIT_EVENT_COPY_FILE_WRITE,
	WAIT_EVENT_DATA_FILE_EXTEND,
	WAIT_EVENT_DATA_FILE_FLUSH,
	WAIT_EVENT_DATA_FILE_IMMEDIATE_SYNC,
	WAIT_EVENT_DATA_FILE_PREFETCH,
	WAIT_EVENT_DATA_FILE_READ,
	WAIT_EVENT_DATA_FILE_SYNC,
	WAIT_EVENT_DATA_FILE_TRUNCATE,
	WAIT_EVENT_DATA_FILE_WRITE,
	WAIT_EVENT_DSM_ALLOCATE,
	WAIT_EVENT_DSM_FILL_ZERO_WRITE,
	WAIT_EVENT_LOCK_FILE_ADDTODATADIR_READ,
	WAIT_EVENT_LOCK_FILE_ADDTODATADIR_SYNC,
	WAIT_EVENT_LOCK_FILE_ADDTODATADIR_WRITE,
	WAIT_EVENT_LOCK_FILE_CREATE_READ,
	WAIT_EVENT_LOCK_FILE_CREATE_SYNC,
	WAIT_EVENT_LOCK_FILE_CREATE_WRITE,
	WAIT_EVENT_LOCK_FILE_RECHECKDATADIR_READ,
	WAIT_EVENT_LOGICAL_REWRITE_CHECKPOINT_SYNC,
	WAIT_EVENT_LOGICAL_REWRITE_MAPPING_SYNC,
	WAIT_EVENT_LOGICAL_REWRITE_MAPPING_WRITE,
	WAIT_EVENT_LOGICAL_REWRITE_SYNC,
	WAIT_EVENT_LOGICAL_REWRITE_TRUNCATE,
	WAIT_EVENT_LOGICAL_REWRITE_WRITE,
	WAIT_EVENT_RELATION_MAP_READ,
	WAIT_EVENT_RELATION_MAP_REPLACE,
	WAIT_EVENT_RELATION_MAP_WRITE,
	WAIT_EVENT_REORDER_BUFFER_READ,
	WAIT_EVENT_REORDER_BUFFER_WRITE,
	WAIT_EVENT_REORDER_LOGICAL_MAPPING_READ,
	WAIT_EVENT_REPLICATION_SLOT_READ,
	WAIT_EVENT_REPLICATION_SLOT_RESTORE_SYNC,
	WAIT_EVENT_REPLICATION_SLOT_SYNC,
	WAIT_EVENT_REPLICATION_SLOT_WRITE,
	WAIT_EVENT_SLRU_FLUSH_SYNC,
	WAIT_EVENT_SLRU_READ,
	WAIT_EVENT_SLRU_SYNC,
	WAIT_EVENT_SLRU_WRITE,
	WAIT_EVENT_SNAPBUILD_READ,
	WAIT_EVENT_SNAPBUILD_SYNC,
	WAIT_EVENT_SNAPBUILD_WRITE,
	WAIT_EVENT_TIMELINE_HISTORY_FILE_SYNC,
	WAIT_EVENT_TIMELINE_HISTORY_FILE_WRITE,
	WAIT_EVENT_TIMELINE_HISTORY_READ,
	WAIT_EVENT_TIMELINE_HISTORY_SYNC,
	WAIT_EVENT_TIMELINE_HISTORY_WRITE,
	WAIT_EVENT_TWOPHASE_FILE_READ,
	WAIT_EVENT_TWOPHASE_FILE_SYNC,
	WAIT_EVENT_TWOPHASE_FILE_WRITE,
	WAIT_EVENT_VERSION_FILE_SYNC,
	WAIT_EVENT_VERSION_FILE_WRITE,
	WAIT_EVENT_WALSENDER_TIMELINE_HISTORY_READ,
	WAIT_EVENT_WAL_BOOTSTRAP_SYNC,
	WAIT_EVENT_WAL_BOOTSTRAP_WRITE,
	WAIT_EVENT_WAL_COPY_READ,
	WAIT_EVENT_WAL_COPY_SYNC,
	WAIT_EVENT_WAL_COPY_WRITE,
	WAIT_EVENT_WAL_INIT_SYNC,
	WAIT_EVENT_WAL_INIT_WRITE,
	WAIT_EVENT_WAL_READ,
	WAIT_EVENT_WAL_SUMMARY_READ,
	WAIT_EVENT_WAL_SUMMARY_WRITE,
	WAIT_EVENT_WAL_SYNC,
	WAIT_EVENT_WAL_SYNC_METHOD_ASSIGN,
	WAIT_EVENT_WAL_WRITE
} WaitEventIO;

typedef enum
{
	WAIT_EVENT_APPEND_READY = PG_WAIT_IPC,
	WAIT_EVENT_ARCHIVE_CLEANUP_COMMAND,
	WAIT_EVENT_ARCHIVE_COMMAND,
	WAIT_EVENT_BACKEND_TERMINATION,
	WAIT_EVENT_BACKUP_WAIT_WAL_ARCHIVE,
	WAIT_EVENT_BGWORKER_SHUTDOWN,
	WAIT_EVENT_BGWORKER_STARTUP,
	WAIT_EVENT_BTREE_PAGE,
	WAIT_EVENT_BUFFER_IO,
	WAIT_EVENT_CHECKPOINT_DELAY_COMPLETE,
	WAIT_EVENT_CHECKPOINT_DELAY_START,
	WAIT_EVENT_CHECKPOINT_DONE,
	WAIT_EVENT_CHECKPOINT_START,
	WAIT_EVENT_EXECUTE_GATHER,
	WAIT_EVENT_HASH_BATCH_ALLOCATE,
	WAIT_EVENT_HASH_BATCH_ELECT,
	WAIT_EVENT_HASH_BATCH_LOAD,
	WAIT_EVENT_HASH_BUILD_ALLOCATE,
	WAIT_EVENT_HASH_BUILD_ELECT,
	WAIT_EVENT_HASH_BUILD_HASH_INNER,
	WAIT_EVENT_HASH_BUILD_HASH_OUTER,
	WAIT_EVENT_HASH_GROW_BATCHES_DECIDE,
	WAIT_EVENT_HASH_GROW_BATCHES_ELECT,
	WAIT_EVENT_HASH_GROW_BATCHES_FINISH,
	WAIT_EVENT_HASH_GROW_BATCHES_REALLOCATE,
	WAIT_EVENT_HASH_GROW_BATCHES_REPARTITION,
	WAIT_EVENT_HASH_GROW_BUCKETS_ELECT,
	WAIT_EVENT_HASH_GROW_BUCKETS_REALLOCATE,
	WAIT_EVENT_HASH_GROW_BUCKETS_REINSERT,
	WAIT_EVENT_LOGICAL_APPLY_SEND_DATA,
	WAIT_EVENT_LOGICAL_PARALLEL_APPLY_STATE_CHANGE,
	WAIT_EVENT_LOGICAL_SYNC_DATA,
	WAIT_EVENT_LOGICAL_SYNC_STATE_CHANGE,
	WAIT_EVENT_MESSAGE_QUEUE_INTERNAL,
	WAIT_EVENT_MESSAGE_QUEUE_PUT_MESSAGE,
	WAIT_EVENT_MESSAGE_QUEUE_RECEIVE,
	WAIT_EVENT_MESSAGE_QUEUE_SEND,
	WAIT_EVENT_PARALLEL_BITMAP_SCAN,
	WAIT_EVENT_PARALLEL_CREATE_INDEX_SCAN,
	WAIT_EVENT_PARALLEL_FINISH,
	WAIT_EVENT_PROCARRAY_GROUP_UPDATE,
	WAIT_EVENT_PROC_SIGNAL_BARRIER,
	WAIT_EVENT_PROMOTE,
	WAIT_EVENT_RECOVERY_CONFLICT_SNAPSHOT,
	WAIT_EVENT_RECOVERY_CONFLICT_TABLESPACE,
	WAIT_EVENT_RECOVERY_END_COMMAND,
	WAIT_EVENT_RECOVERY_PAUSE,
	WAIT_EVENT_REPLICATION_ORIGIN_DROP,
	WAIT_EVENT_REPLICATION_SLOT_DROP,
	WAIT_EVENT_RESTORE_COMMAND,
	WAIT_EVENT_SAFE_SNAPSHOT,
	WAIT_EVENT_SYNC_REP,
	WAIT_EVENT_WAL_RECEIVER_EXIT,
	WAIT_EVENT_WAL_RECEIVER_WAIT_START,
	WAIT_EVENT_WAL_SUMMARY_READY,
	WAIT_EVENT_XACT_GROUP_UPDATE
} WaitEventIPC;

typedef enum
{
	WAIT_EVENT_BASE_BACKUP_THROTTLE = PG_WAIT_TIMEOUT,
	WAIT_EVENT_CHECKPOINT_WRITE_DELAY,
	WAIT_EVENT_PG_SLEEP,
	WAIT_EVENT_RECOVERY_APPLY_DELAY,
	WAIT_EVENT_RECOVERY_RETRIEVE_RETRY_INTERVAL,
	WAIT_EVENT_REGISTER_SYNC_REQUEST,
	WAIT_EVENT_SPIN_DELAY,
	WAIT_EVENT_VACUUM_DELAY,
	WAIT_EVENT_VACUUM_TRUNCATE,
	WAIT_EVENT_WAL_SUMMARIZER_ERROR
} WaitEventTimeout;

#endif                          /* WAIT_EVENT_TYPES_H */
