/* made by EzioChiu.
 */

@protocol NAIdentifiable <NAHashable, NAEquatable>

@required

+ (NAIdentity *)na_identity;

@end
