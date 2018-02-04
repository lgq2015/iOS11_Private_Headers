/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFControlPanelItemSingleControlRule : NSObject <HFControlPanelItemRule> {
    id /* block */  _displayResultsGenerator;
    id /* block */  _filter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ displayResultsGenerator;
@property (nonatomic, readonly, copy) id /* block */ filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controlPanelItemForControlItems:(id)arg1;
- (id /* block */)displayResultsGenerator;
- (id /* block */)filter;
- (id)initWithFilter:(id /* block */)arg1 displayResultsGenerator:(id /* block */)arg2;

@end
