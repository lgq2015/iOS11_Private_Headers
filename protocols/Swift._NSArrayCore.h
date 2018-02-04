/* made by EzioChiu.
 */

@protocol Swift._NSArrayCore <Swift._NSCopying, Swift._NSFastEnumeration>

@required

- (long long)count;
- (long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(long long)arg3;
- (void)getObjects:(id*)arg1 range:(struct { long long x1; long long x2; })arg2;
- (id)objectAtIndex:(long long)arg1;

@end
