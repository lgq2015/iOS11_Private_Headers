/* made by EzioChiu.
 */

@protocol MusicIndexBarDataSource <NSObject>

@required

- (SKUIIndexBarEntry *)indexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;

@end
