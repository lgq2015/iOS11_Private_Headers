/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebResource : NSObject <NSCoding, NSCopying> {
    WebResourcePrivate * _private;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *frameName;
@property (nonatomic, readonly, copy) NSString *textEncodingName;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)MIMEType;
- (id)URL;
- (struct ArchiveResource { int (**x1)(); unsigned int x2; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5; unsigned int x_3_1_6; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; unsigned int x_3_1_10; unsigned int x_3_1_11; unsigned int x_3_1_12; unsigned int x_3_1_13; } x3; struct ResourceResponse { bool x_4_1_1; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; unsigned int x_2_2_13; } x_4_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_4_1_3; long long x_4_1_4; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_5_2_1; } x_4_1_5; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_6_2_1; } x_4_1_6; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_7_2_1; } x_4_1_7; struct HTTPHeaderMap { struct HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> > { struct HashTable<WebCore::HTTPHeaderName, WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String> >, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName> > { struct KeyValuePair<WebCore::HTTPHeaderName, WTF::String> {} *x_1_4_1; unsigned int x_1_4_2; unsigned int x_1_4_3; unsigned int x_1_4_4; unsigned int x_1_4_5; } x_1_3_1; } x_8_2_1; struct HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_4_1; unsigned int x_1_4_2; unsigned int x_1_4_3; unsigned int x_1_4_4; unsigned int x_1_4_5; } x_2_3_1; } x_8_2_2; } x_4_1_8; } x4; }*)_coreResource;
- (void)_ignoreWhenUnarchiving;
- (id)_initWithCoreResource:(struct Ref<WebCore::ArchiveResource> { struct ArchiveResource {} *x1; }*)arg1;
- (id)_initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 response:(id)arg6 copyData:(bool)arg7;
- (id)_initWithData:(id)arg1 URL:(id)arg2 response:(id)arg3;
- (id)_response;
- (id)_stringValue;
- (id)_suggestedFilename;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frameName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)textEncodingName;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)bundleForClass;

@end
