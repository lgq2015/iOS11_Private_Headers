/* made by EzioChiu
   Image: /usr/lib/libprequelite.dylib
 */

@interface PQLNameInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *sql;
@property (readonly) Class superclass;

+ (id)_appendString:(id)arg1 toInjection:(id)arg2;
+ (id)nameWithPrefix:(id)arg1 suffix:(id)arg2;
+ (id)nameWithString:(id)arg1;

- (int)bindWithStatement:(struct sqlite3_stmt { }*)arg1 startingAtIndex:(int)arg2;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)nameByAddingSuffix:(id)arg1;

@end
