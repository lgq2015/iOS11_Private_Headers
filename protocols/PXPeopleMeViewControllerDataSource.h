/* made by EzioChiu.
 */

@protocol PXPeopleMeViewControllerDataSource <NSObject>

@required

- (<PXPerson> *)suggestedPersonForMeViewController:(PXPeopleMeViewController *)arg1;
- (void)userDidAnswerMeViewController:(PXPeopleMeViewController *)arg1 withResponse:(bool)arg2 suggestedPerson:(id <PXPerson>)arg3;

@end
