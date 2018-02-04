/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKGreenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource> {
    PKFelicaPassProperties * _properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKFelicaPassProperties *properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFelicaProperty:(id)arg1;
- (unsigned long long)numberOfLegs;
- (id)properties;
- (id)titleForLeg:(unsigned long long)arg1;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
- (id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;

@end
