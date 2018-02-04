/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOperationStatus : NSObject <NSCopying> {
    NSError * _error;
    double  _progress;
    long long  _state;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithState:(long long)arg1 progress:(double)arg2 error:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)operationStatusByMixingOperationStatus:(id)arg1 withMixFactor:(double)arg2;
- (double)progress;
- (long long)state;

@end
