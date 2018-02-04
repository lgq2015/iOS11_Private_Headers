/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementFactoryContext : NSObject {
    IKViewElement * _headViewElement;
    IKViewElement * _navigationBarViewElement;
    IKViewElementStyleFactory * _styleFactory;
    IKViewElement * _templateViewElement;
    IKViewElement * _toolBarViewElement;
    unsigned long long  _updateType;
}

@property (nonatomic, retain) IKViewElement *headViewElement;
@property (nonatomic, retain) IKViewElement *navigationBarViewElement;
@property (nonatomic, retain) IKViewElementStyleFactory *styleFactory;
@property (nonatomic, retain) IKViewElement *templateViewElement;
@property (nonatomic, retain) IKViewElement *toolBarViewElement;
@property (nonatomic) unsigned long long updateType;

- (void).cxx_destruct;
- (id)headViewElement;
- (id)navigationBarViewElement;
- (void)setHeadViewElement:(id)arg1;
- (void)setNavigationBarViewElement:(id)arg1;
- (void)setStyleFactory:(id)arg1;
- (void)setTemplateViewElement:(id)arg1;
- (void)setToolBarViewElement:(id)arg1;
- (void)setUpdateType:(unsigned long long)arg1;
- (id)styleFactory;
- (id)templateViewElement;
- (id)toolBarViewElement;
- (unsigned long long)updateType;

@end
