/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKVectorTimestampElement : NSObject {
    unsigned long long  _clock;
    unsigned long long  _subclock;
}

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long subclock;

- (unsigned long long)clock;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setClock:(unsigned long long)arg1;
- (void)setSubclock:(unsigned long long)arg1;
- (unsigned long long)subclock;

@end
