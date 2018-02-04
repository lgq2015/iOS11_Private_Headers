/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAttributePickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    AKController * _controller;
    <AKAttributePickerViewControllerDelegate> * _delegate;
    NSArray * _rowViews;
    NSSet * _selectedAnnotations;
    UITableView * _tableView;
}

@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKAttributePickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *rowViews;
@property (nonatomic, retain) NSSet *selectedAnnotations;
@property (readonly) Class superclass;
@property (retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_attributeStyleChanged:(id)arg1;
- (void)_lineAttributesChanged:(id)arg1;
- (void)_updatePreferredContentSize;
- (id)controller;
- (id)delegate;
- (id)initWithController:(id)arg1 selectedAnnotations:(id)arg2;
- (void)revalidateItems;
- (id)rowViews;
- (id)selectedAnnotations;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRowViews:(id)arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateLayoutForSelectedAnnotations;
- (void)viewDidLoad;

@end
