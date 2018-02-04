/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNamedEntityRecord : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long  _algorithm;
    double  _decayRate;
    PPNamedEntity * _entity;
    unsigned long long  _extractionAssetVersion;
    NSString * _extractionOsBuild;
    double  _initialScore;
    PPSource * _source;
}

@property (nonatomic, readonly) unsigned long long algorithm;
@property (nonatomic, readonly) double decayRate;
@property (nonatomic, readonly) PPNamedEntity *entity;
@property (nonatomic, readonly) unsigned long long extractionAssetVersion;
@property (nonatomic, readonly) NSString *extractionOsBuild;
@property (nonatomic, readonly) double initialScore;
@property (nonatomic, readonly) PPSource *source;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)describeAlgorithm:(unsigned long long)arg1;

- (unsigned long long)algorithm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)decayRate;
- (id)entity;
- (unsigned long long)extractionAssetVersion;
- (id)extractionOsBuild;
- (double)initialScore;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)source;

@end
