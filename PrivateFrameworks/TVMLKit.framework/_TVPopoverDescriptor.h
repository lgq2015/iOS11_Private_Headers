/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPopoverDescriptor : NSObject {
    IKViewElement * _buttonElement;
    IKImageElement * _imageElement;
    IKViewElement * _popoverElement;
    NSArray * _popoverEntries;
    struct CGSize { 
        double width; 
        double height; 
    }  _popoverSize;
    UIColor * _tintColor;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic, readonly) IKViewElement *buttonElement;
@property (nonatomic, readonly) IKViewElement *popoverElement;
@property (nonatomic, readonly, copy) NSArray *popoverEntries;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } popoverSize;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_init;
- (void)_populateWithElement:(id)arg1;
- (id)buttonElement;
- (id)init;
- (id)initWithViewElement:(id)arg1;
- (id)popoverElement;
- (id)popoverEntries;
- (struct CGSize { double x1; double x2; })popoverSize;
- (id)tintColor;
- (id)title;
- (unsigned long long)type;

@end
