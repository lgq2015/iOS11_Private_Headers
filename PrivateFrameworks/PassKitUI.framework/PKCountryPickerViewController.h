/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCountryPickerViewController : UITableViewController {
    UILocalizedIndexedCollation * _collation;
    NSArray * _countries;
    <PKCountryPickerViewControllerDelegate> * _delegate;
    NSArray * _sections;
    long long  _style;
}

@property (nonatomic, retain) UILocalizedIndexedCollation *collation;
@property (nonatomic, retain) NSArray *countries;
@property (nonatomic) <PKCountryPickerViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)_configureSections;
- (void)_loadCountryCodes;
- (id)collation;
- (id)countries;
- (id)delegate;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sections;
- (void)setCollation:(id)arg1;
- (void)setCountries:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
