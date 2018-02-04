/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPFavoritesReplica : MSPOrderedReplica <MSPContainerStateSnapshot, MSPPropertyListReplicaDataSerialization, NSSecureCoding>

@property (nonatomic, readonly, copy) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *propertyListDataRepresentation;
@property (nonatomic, readonly) id propertyListRepresentation;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (void)switchForEdit:(id)arg1 caseIsInsertRecord:(id /* block */)arg2 caseIsEditContents:(id /* block */)arg3 caseIsEditPosition:(id /* block */)arg4;

- (id)contents;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(id /* block */)arg2;
- (id)propertyListDataRepresentation;
- (id)propertyListRepresentation;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(id /* block */)arg1;
- (id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out bool*)arg3;

@end
