/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUPriority : NSObject {
    long long  _level;
    double  _order;
}

@property (nonatomic, readonly) bool isHigh;
@property (nonatomic, readonly) bool isLow;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) double order;

- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLevel:(long long)arg1;
- (id)initWithLevel:(long long)arg1 order:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPriority:(id)arg1;
- (bool)isHigh;
- (bool)isLow;
- (long long)level;
- (double)order;

@end
