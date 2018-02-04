/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSceneprint : NSObject <NSSecureCoding> {
    NSData * _descriptorData;
    long long  _distanceMode;
    unsigned long long  _elementCount;
    unsigned long long  _lengthInBytes;
    NSDictionary * _softmaxLabelsAndConfidence;
    NSString * _version;
}

@property (retain) NSData *descriptorData;
@property long long distanceMode;
@property unsigned long long elementCount;
@property unsigned long long lengthInBytes;
@property (retain) NSDictionary *softmaxLabelsAndConfidence;
@property (readonly) NSString *version;

+ (id)currentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptorData;
- (long long)distanceMode;
- (unsigned long long)elementCount;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(char *)arg1 elementCount:(unsigned long long)arg2 lengthInBytes:(unsigned long long)arg3 distanceMode:(long long)arg4 softmaxLabelsAndConfidence:(struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lengthInBytes;
- (void)setDescriptorData:(id)arg1;
- (void)setDistanceMode:(long long)arg1;
- (void)setElementCount:(unsigned long long)arg1;
- (void)setLengthInBytes:(unsigned long long)arg1;
- (void)setSoftmaxLabelsAndConfidence:(id)arg1;
- (id)softmaxLabelsAndConfidence;
- (id)version;

@end
