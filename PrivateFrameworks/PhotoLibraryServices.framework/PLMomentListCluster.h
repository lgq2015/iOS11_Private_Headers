/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentListCluster : NSObject {
    NSMutableSet * __moments;
    unsigned long long  _month;
    unsigned long long  _numberOfAssets;
    unsigned long long  _numberOfMoments;
    unsigned long long  _year;
}

@property (nonatomic, readonly) NSMutableSet *_moments;
@property (nonatomic, readonly) unsigned long long month;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) unsigned long long numberOfMoments;
@property (nonatomic, readonly) unsigned long long year;

- (id)_moments;
- (void)addMoment:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMonth:(unsigned long long)arg1 year:(unsigned long long)arg2;
- (unsigned long long)month;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfMoments;
- (unsigned long long)peak;
- (void)removeMoment:(id)arg1;
- (unsigned long long)year;

@end
