/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPNumberRandomizer : NSObject {
    double  _epsilon;
    _DPLaplaceNoiseGenerator * _generator;
    unsigned long long  _range;
}

@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) _DPLaplaceNoiseGenerator *generator;
@property (nonatomic, readonly) unsigned long long range;

+ (id)numberRandomizerWithRange:(unsigned long long)arg1 epsilon:(double)arg2;

- (void).cxx_destruct;
- (id)description;
- (double)epsilon;
- (id)generator;
- (id)init;
- (id)initWithRange:(unsigned long long)arg1 epsilon:(double)arg2;
- (id)randomize:(id)arg1;
- (unsigned long long)range;

@end
