/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPPosition : NSObject <MSPPositionSignpost, NSCopying, NSSecureCoding> {
    NSArray * _pathComponents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_pathComponents, readonly) NSArray *pathComponents;
@property (nonatomic, readonly) NSData *serializedRepresentation;
@property (readonly) Class superclass;

+ (bool)_hasSpaceForInsertionAtDepth:(unsigned long long)arg1 betweenEarlierPosition:(id)arg2 andLaterPosition:(id)arg3 clientIdentifier:(id)arg4;
+ (id)_pathComponentsForSignpost:(id)arg1;
+ (long long)_strategyForAllocationAtDepth:(unsigned long long)arg1;
+ (id)finalPositionWithClientIdentifier:(id)arg1;
+ (id)finalSignpostWithClientIdentifier:(id)arg1;
+ (id)initialPositionWithClientIdentifier:(id)arg1;
+ (id)initialSignpostWithClientIdentifier:(id)arg1;
+ (id)positionBetweenPosition:(id)arg1 andPosition:(id)arg2 clientIdentifier:(id)arg3;
+ (id)positionBetweenSignpost:(id)arg1 andSignpost:(id)arg2 clientIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_addingDistanceAtEqualDepth:(long long)arg1 clientIdentifier:(id)arg2;
- (id)_initWithIndexes:(id)arg1 originIdentifier:(id)arg2;
- (id)_initWithPathComponents:(id)arg1;
- (bool)_isFinal;
- (bool)_isInitial;
- (id)_pathComponents;
- (id)_positionByTruncatingOrExtendingToDepth:(unsigned long long)arg1 clientIdentifier:(id)arg2;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)serializedRepresentation;

@end
