/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageCompatibilityChecker : NSObject <TSDMediaCompatibilityChecker> {
    bool  mCancelled;
    long long  mCompatibilityLevel;
    NSError * mError;
    TSPData * mImageData;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) long long compatibilityLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)checkCompatibilityUpToLevel:(long long)arg1 completionHandler:(id /* block */)arg2;
- (long long)compatibilityLevel;
- (id)error;
- (id)initWithImageData:(id)arg1;
- (bool)isCancelled;

@end
