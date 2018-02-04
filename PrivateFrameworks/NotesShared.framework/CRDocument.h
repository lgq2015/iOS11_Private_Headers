/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRDocument : NSObject {
    NSMutableDictionary * _objects;
    NSUUID * _replica;
    long long  _replicaClock;
    id  _rootObject;
    CRVectorTimestamp * _startVersion;
    long long  _unserializedReplicaClock;
    CRVectorTimestamp * _version;
}

@property (nonatomic, readonly) NSMutableDictionary *objects;
@property (nonatomic, readonly) NSUUID *replica;
@property (nonatomic, readonly) long long replicaClock;
@property (nonatomic, retain) id rootObject;
@property (nonatomic, readonly) CRVectorTimestamp *startVersion;
@property (nonatomic) long long unserializedReplicaClock;
@property (nonatomic, readonly) CRVectorTimestamp *version;

+ (id)documentWithReplica:(id)arg1;
+ (id)documentWithRootObject:(id)arg1 replica:(id)arg2;
+ (id)unarchiveFromData:(id)arg1 replica:(id)arg2;

- (void).cxx_destruct;
- (id)archivedData;
- (id)copyForReplica:(id)arg1;
- (id)deltaSince:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithReplica:(id)arg1;
- (id)initWithVersion:(id)arg1 rootObject:(id)arg2 replica:(id)arg3;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4;
- (id)localObject:(id)arg1;
- (unsigned long long)mergeResultForMergingWithDocument:(id)arg1;
- (void)mergeTimestampWithDocument:(id)arg1;
- (unsigned long long)mergeWithData:(id)arg1;
- (unsigned long long)mergeWithDocument:(id)arg1;
- (id)objects;
- (void)realizeLocalChanges;
- (id)replica;
- (long long)replicaClock;
- (id)rootObject;
- (void)setDocument:(id)arg1;
- (void)setDocumentFor:(id)arg1;
- (void)setRootObject:(id)arg1;
- (void)setUnserializedReplicaClock:(long long)arg1;
- (id)startVersion;
- (long long)unserializedReplicaClock;
- (void)updateGraphDocumentPointers;
- (void)updateObjects:(id)arg1;
- (void)updateObjectsSet;
- (id)version;
- (void)walkGraph:(id /* block */)arg1 root:(id)arg2;

@end
