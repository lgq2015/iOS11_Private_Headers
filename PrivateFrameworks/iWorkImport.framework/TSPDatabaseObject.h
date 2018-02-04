/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseObject : NSObject {
    int  _classType;
    long long  _identifier;
}

@property (nonatomic, readonly) int classType;
@property (nonatomic, readonly) long long dataState;
@property (nonatomic, readonly) NSString *fileState;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) bool hasDataState;
@property (nonatomic, readonly) bool hasFileState;
@property (nonatomic, readonly) long long identifier;

+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3;
+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4;

- (int)classType;
- (long long)dataState;
- (id)fileState;
- (id)fileURL;
- (bool)hasDataState;
- (bool)hasFileState;
- (long long)identifier;
- (id)init;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2;

@end
