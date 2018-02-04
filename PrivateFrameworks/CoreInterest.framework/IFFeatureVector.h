/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFFeatureVector : NSObject <NSCopying> {
    NSDate * _date;
    NSArray * _features;
    long long  _interactionType;
    double  _interval;
}

@property (readonly) NSDate *date;
@property (readonly, copy) NSArray *features;
@property (readonly) long long interactionType;
@property (readonly) double interval;

+ (id)featureVectorWithDate:(id)arg1 interval:(double)arg2 interactionType:(long long)arg3 features:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)features;
- (id)initWithDate:(id)arg1 interval:(double)arg2 interactionType:(long long)arg3 features:(id)arg4;
- (long long)interactionType;
- (double)interval;

@end
