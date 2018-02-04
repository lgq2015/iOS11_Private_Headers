/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoPlayButtonStyle : NSObject {
    LPSize * _backgroundSize;
    double  _disabledOpacity;
    LPSize * _size;
}

@property (nonatomic, retain) LPSize *backgroundSize;
@property (nonatomic) double disabledOpacity;
@property (nonatomic, retain) LPSize *size;

- (void).cxx_destruct;
- (id)backgroundSize;
- (double)disabledOpacity;
- (id)init;
- (void)setBackgroundSize:(id)arg1;
- (void)setDisabledOpacity:(double)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end