/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLIndoorTileEvictionPolicy : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> * _activity;
    bool  _forceClean;
    double  _maxModifiedAge;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic) bool forceClean;
@property (nonatomic) double maxModifiedAge;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceClean;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)maxModifiedAge;
- (void)setActivity:(id)arg1;
- (void)setForceClean:(bool)arg1;
- (void)setMaxModifiedAge:(double)arg1;
- (bool)tileLastModified:(double)arg1 needsEvictionAt:(double)arg2;

@end
