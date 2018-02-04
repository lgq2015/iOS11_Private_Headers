/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPropertyModel : NSObject {
    <CNContactPropertyModelDelegate> * _delegate;
    NSMutableDictionary * _model;
    NSArray * _properties;
    <CNContactPropertyRemoteModelDelegate> * _remoteDelegate;
    id  _source;
    NSMutableArray * _transactions;
    NSMutableArray * _validProperties;
}

@property (nonatomic, retain) <CNContactPropertyModelDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *model;
@property (nonatomic, retain) NSArray *properties;
@property (nonatomic, retain) <CNContactPropertyRemoteModelDelegate> *remoteDelegate;
@property (nonatomic, retain) id source;
@property (nonatomic, retain) NSMutableArray *transactions;
@property (nonatomic, retain) NSMutableArray *validProperties;

- (void).cxx_destruct;
- (id)delegate;
- (id)model;
- (void)noteTransactionsUpdated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)properties;
- (id)propertyForIndexPath:(id)arg1;
- (void)reloadModelFromSource;
- (id)remoteDelegate;
- (id)resolvePendingTransactions;
- (long long)rowCountForSection:(long long)arg1;
- (long long)sectionCount;
- (long long)sectionForProperty:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRemoteDelegate:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTransactions:(id)arg1;
- (void)setUpdatedTransactions:(id)arg1;
- (void)setValidProperties:(id)arg1;
- (id)source;
- (id)transactions;
- (id)validProperties;

@end
