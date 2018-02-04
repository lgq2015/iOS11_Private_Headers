/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUINavigationListItem : NSObject {
    <CNUINavigationListItemContent> * _content;
    CNUINavigationListItem * _defaultItem;
    NSString * _identifier;
    UIImage * _image;
    NSArray * _items;
    CNUINavigationListItem * _parent;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) <CNUINavigationListItemContent> *content;
@property (nonatomic) CNUINavigationListItem *defaultItem;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) CNUINavigationListItem *parent;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (id)itemForActionItem:(id)arg1 isGrouped:(bool)arg2;
+ (id)localizedLabelForActionItem:(id)arg1 usingPropertyLabel:(bool)arg2;
+ (id)navigationListItemsForUserActionListModel:(id)arg1;

- (void).cxx_destruct;
- (id)content;
- (id)defaultItem;
- (id)identifier;
- (id)image;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)items;
- (id)parent;
- (void)setContent:(id)arg1;
- (void)setDefaultItem:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
