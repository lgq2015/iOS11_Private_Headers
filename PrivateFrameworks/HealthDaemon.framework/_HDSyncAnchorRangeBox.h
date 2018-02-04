/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSyncAnchorRangeBox : NSObject <NSSecureCoding> {
    struct HDSyncAnchorRange { 
        long long start; 
        long long end; 
    }  _anchorRange;
}

+ (bool)supportsSecureCoding;

- (struct HDSyncAnchorRange { long long x1; long long x2; })anchorRange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHDSyncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg1;
- (bool)isEqual:(id)arg1;

@end
