/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRecordSourceFetchContext : NSObject {
    unsigned long long  _cachePolicy;
    double  _maxCachedAge;
    bool  _refresh;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maxCachedAge;
@property (nonatomic) bool refresh;

- (unsigned long long)cachePolicy;
- (double)maxCachedAge;
- (bool)refresh;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setMaxCachedAge:(double)arg1;
- (void)setRefresh:(bool)arg1;

@end
