/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIChoiceViewElement : RUIElement <RUITopLevelPageElement> {
    NSMutableArray * _choices;
    RUIElement * _header;
    RUIElement * _helpLinkElement;
    UIImage * _image;
    RUIObjectModel * _objectModel;
    RUIPage * _page;
    RUISubHeaderElement * _subHeader;
    RUIChoiceView * _view;
}

@property (nonatomic, readonly) NSArray *choices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIElement *header;
@property (nonatomic, retain) RUIElement *helpLinkElement;
@property (nonatomic) RUIObjectModel *objectModel;
@property (nonatomic) RUIPage *page;
@property (nonatomic, retain) RUISubHeaderElement *subHeader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addChoiceElement:(id)arg1;
- (void)choiceView:(id)arg1 tappedChoiceAtIndex:(unsigned long long)arg2;
- (void)choiceViewTappedHelpLink:(id)arg1;
- (id)choices;
- (id)header;
- (id)helpLinkElement;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (id)objectModel;
- (id)page;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setHelpLinkElement:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setObjectModel:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setSubHeader:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceURL;
- (id)subHeader;
- (id)titleLabel;
- (id)view;

@end
