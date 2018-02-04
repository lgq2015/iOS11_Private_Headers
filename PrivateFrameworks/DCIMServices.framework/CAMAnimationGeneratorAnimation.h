/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface CAMAnimationGeneratorAnimation : NSObject {
    id /* block */  _completionHandler;
    double  _duration;
    double  _startTime;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (double)duration;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2 updateHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (double)startTime;
- (id /* block */)updateHandler;

@end
