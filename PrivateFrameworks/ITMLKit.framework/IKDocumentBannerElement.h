/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDocumentBannerElement : IKViewElement {
    bool  _fixed;
}

@property (nonatomic, readonly, retain) IKBackgroundElement *background;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly, retain) NSArray *buttons;
@property (getter=isFixed, nonatomic, readonly) bool fixed;
@property (nonatomic, readonly, retain) IKLockupElement *lockup;
@property (nonatomic, readonly, retain) IKTextElement *subtitle;
@property (nonatomic, readonly, retain) IKTextElement *title;

- (id)background;
- (id)backgroundColor;
- (id)buttons;
- (bool)fixed;
- (bool)isFixed;
- (id)lockup;
- (id)subtitle;
- (id)title;

@end
