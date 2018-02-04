/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionRowPresentationProperties : NSObject {
    LPCaptionPresentationProperties * _leading;
    LPCaptionPresentationProperties * _trailing;
}

@property (nonatomic, readonly, retain) LPCaptionPresentationProperties *leading;
@property (nonatomic, readonly, retain) LPCaptionPresentationProperties *trailing;

- (void).cxx_destruct;
- (id)init;
- (id)leading;
- (id)left;
- (id)right;
- (id)trailing;

@end
