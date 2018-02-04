/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAutocompleteResultPartitioner : NSObject {
    NSMutableArray * _foundInMailResultsArray;
    NSMutableArray * _foundOnServersResultsArray;
    NSMutableArray * _normalResultsArray;
    TUSearchController * _searchController;
}

@property (nonatomic, retain) NSMutableArray *foundInMailResultsArray;
@property (nonatomic, retain) NSMutableArray *foundOnServersResultsArray;
@property (nonatomic, retain) NSMutableArray *normalResultsArray;
@property TUSearchController *searchController;

+ (bool)sourceTypeIsFoundInMail:(unsigned long long)arg1;
+ (bool)sourceTypeIsFoundOnServers:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addResult:(id)arg1;
- (id)foundInMailResultsArray;
- (id)foundOnServersResultsArray;
- (id)init;
- (id)normalResultsArray;
- (id)searchController;
- (id)searchResults;
- (void)setFoundInMailResultsArray:(id)arg1;
- (void)setFoundOnServersResultsArray:(id)arg1;
- (void)setNormalResultsArray:(id)arg1;
- (void)setSearchController:(id)arg1;

@end
