/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVViewElement : NSObject <NSCopying> {
    bool  _disabled;
    IKViewElement * _element;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *autoHighlightIdentifier;
@property (nonatomic, readonly) NSArray *childViewElements;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, readonly) IKViewElement *element;
@property (nonatomic, readonly) NSString *elementIdentifier;
@property (nonatomic, readonly) NSString *elementName;
@property (nonatomic, readonly) TVViewElement *parentViewElement;
@property (nonatomic, readonly) TVViewElementStyle *style;
@property (nonatomic, readonly) long long updateType;

- (void).cxx_destruct;
- (id)attributes;
- (id)autoHighlightIdentifier;
- (id)childViewElements;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dispatchEventOfType:(long long)arg1 canBubble:(bool)arg2 cancellable:(bool)arg3 extraInfo:(id)arg4 completion:(id /* block */)arg5;
- (void)dispatchEventWithName:(id)arg1 canBubble:(bool)arg2 cancellable:(bool)arg3 extraInfo:(id)arg4 completion:(id /* block */)arg5;
- (id)element;
- (id)elementIdentifier;
- (id)elementName;
- (id)initWithViewElement:(id)arg1;
- (bool)isDisabled;
- (id)parentViewElement;
- (void)resetProperty:(long long)arg1;
- (void)setDisabled:(bool)arg1;
- (id)style;
- (long long)updateType;

@end
