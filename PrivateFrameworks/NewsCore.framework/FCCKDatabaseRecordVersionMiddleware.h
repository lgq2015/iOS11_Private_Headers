/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabaseRecordVersionMiddleware : NSObject <FCCKDatabaseOperationMiddleware, FCCKDatabaseRecordMiddleware>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)clientRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)clientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)clientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
- (id)clientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)clientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)serverRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
- (id)serverRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
- (id)serverRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;

@end
