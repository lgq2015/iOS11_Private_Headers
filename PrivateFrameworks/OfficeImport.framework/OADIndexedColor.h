/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADIndexedColor : OADColor {
    unsigned long long  mIndex;
}

+ (id)indexedColorWithIndex:(unsigned long long)arg1;

- (id)colorFromPalette:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithIndex:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
