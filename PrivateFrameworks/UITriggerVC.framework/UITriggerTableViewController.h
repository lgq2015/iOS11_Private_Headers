/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface UITriggerTableViewController : UITableViewController <CSLUIUITriggerIDSProtocolResponse, IDSServiceDelegate, UITableViewDataSource, UITableViewDelegate> {
    IDSService * _idsService;
    bool  _loading;
    NSMutableDictionary * _sectionContents;
    NSMutableArray * _sectionList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *idsService;
@property (nonatomic) bool loading;
@property (nonatomic, retain) NSMutableDictionary *sectionContents;
@property (nonatomic, retain) NSMutableArray *sectionList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_extractSections:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)idsRequestUITriggerResponse:(id)arg1;
- (id)idsService;
- (void)idsUIProvidersResponse:(id)arg1;
- (bool)loading;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)requestPluginList;
- (id)sectionContents;
- (id)sectionList;
- (id)sectionStringForIndexPath:(id)arg1;
- (id)sendProtobufRequest:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 expectsResponse:(bool)arg4 errorHandler:(id /* block */)arg5 withTimeout:(double)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)setIdsService:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setSectionContents:(id)arg1;
- (void)setSectionList:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tailStringForIndexPath:(id)arg1;
- (bool)triggerUIProvider:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
