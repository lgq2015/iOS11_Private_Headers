/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENGroupID : NSObject <NSCopying, NSSecureCoding> {
    int  _generation;
    ENStableGroupID * _stableGroupID;
}

@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) int generation;
@property (nonatomic, readonly) ENStableGroupID *stableGroupID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)compare:(id)arg1 withResult:(long long*)arg2 error:(id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)generation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithStableGroupID:(id)arg1 generation:(int)arg2;
- (bool)isEqual:(id)arg1;
- (id)stableGroupID;

@end
