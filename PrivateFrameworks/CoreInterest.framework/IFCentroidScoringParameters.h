/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFCentroidScoringParameters : NSObject {
    long long  _divergence;
    NSDictionary * _scale;
}

@property long long divergence;
@property (copy) NSDictionary *scale;

+ (id)defaultParameters;

- (void).cxx_destruct;
- (long long)divergence;
- (id)scale;
- (void)setDivergence:(long long)arg1;
- (void)setScale:(id)arg1;

@end
