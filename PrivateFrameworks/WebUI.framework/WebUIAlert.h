/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WebUIAlert : NSObject {
    id /* block */  _actionHandler;
    NSString * _bodyText;
    id  _context;
    int  _defaultAction;
    int  _hideAction;
    NSArray * _identities;
    long long  _indexOfSelectedIdentity;
    int  _otherAction;
    int  _tableAction;
    NSString * _title;
    NSArray * _titles;
    int  _type;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly, copy) NSString *bodyText;
@property (nonatomic, readonly, copy) NSArray *buttonTitles;
@property (nonatomic, retain) id context;
@property (nonatomic, readonly) int defaultAction;
@property (nonatomic) int hideAction;
@property (nonatomic, retain) NSArray *identities;
@property (nonatomic, readonly) id selectedIdentity;
@property (nonatomic, readonly) int tableAction;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSArray *titles;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)_buttonTitleForAction:(int)arg1;
- (int)actionForButtonTag:(long long)arg1;
- (id /* block */)actionHandler;
- (id)bodyText;
- (id)buttonTitles;
- (id)context;
- (int)defaultAction;
- (int)hideAction;
- (id)identities;
- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5;
- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5 tableAction:(int)arg6;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 tableAction:(int)arg5;
- (id)selectedIdentity;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setHideAction:(int)arg1;
- (void)setIdentities:(id)arg1;
- (void)setSelectedTableItemIndex:(long long)arg1;
- (int)tableAction;
- (id)title;
- (id)titles;
- (int)type;

@end
