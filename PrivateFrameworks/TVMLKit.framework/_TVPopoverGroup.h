/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPopoverGroup : NSObject {
    IKImageElement * _downImageElement;
    IKViewElement * _groupElement;
    NSArray * _groupOptions;
    UIColor * _highlightColor;
    IKTextElement * _titleElement;
    IKImageElement * _upImageElement;
}

@property (nonatomic, readonly) IKImageElement *downImageElement;
@property (nonatomic, readonly) TVImageProxy *downImageProxy;
@property (nonatomic, readonly) IKViewElement *groupElement;
@property (nonatomic, readonly, copy) NSArray *groupOptions;
@property (nonatomic, readonly) UIColor *highlightColor;
@property (nonatomic, readonly) IKTextElement *titleElement;
@property (nonatomic, readonly) IKImageElement *upImageElement;
@property (nonatomic, readonly) TVImageProxy *upImageProxy;

- (void).cxx_destruct;
- (id)_init;
- (void)_populateWithElement:(id)arg1;
- (id)downImageElement;
- (id)downImageProxy;
- (id)groupElement;
- (id)groupOptions;
- (id)highlightColor;
- (id)init;
- (id)initWithViewElement:(id)arg1;
- (id)titleElement;
- (id)upImageElement;
- (id)upImageProxy;

@end
