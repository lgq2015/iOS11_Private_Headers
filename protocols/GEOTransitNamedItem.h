/* made by EzioChiu.
 */

@protocol GEOTransitNamedItem <NSObject>

@required

- (NSString *)bestName;
- (bool)hasMuid;
- (unsigned long long)muid;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;

@end
