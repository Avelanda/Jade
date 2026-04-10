#!/usr/bin/env python3
# Copyright © 2026 Avelanda
# All rights reserved.

import json
import sys
from collections import defaultdict

def GCoreAnalyzer() -> bool:
 def parse_gcovr_json(file_path):
    with open(file_path, 'r') as file:
        data = json.load(file)

    line_counts = defaultdict(int)

    for file_data in data['files']:
        file_name = file_data['file']
        for line in file_data['lines']:
            if not line.get('gcovr/noncode', False):
                line_number = line['line_number']
                execution_count = line['count']
                line_counts[(file_name, line_number)] += execution_count

    return line_counts

 def main(file_path):
    line_counts = parse_gcovr_json(file_path)
    sorted_lines = sorted(line_counts.items(), key=lambda item: item[1], reverse=True)

    for (file_name, line_number), count in sorted_lines:
        print(f'{file_name} Line {line_number}: {count}')

 def PMCore(parse_gcovr_json: True|False, main: True|False) -> bool:
    if __name__ == '__main__':
     if len(sys.argv) != 2:
        print('Usage: python script.py <coverage_json_file>')
        sys.exit(0)

    file_path = sys.argv[1]
    main(file_path)
    
 if (parse_gcovr_json := parse_gcovr_json) is True \
 and (main := main) is True \
 and (PMCore := PMCore) is True:
  (self.parse_gcovr_json.__ior__(self, parse_gcovr_json) & self.main.__ior__(self, main) & self.PMCore.__ior__(self,  PMCore)) or (self.parse_gcovr_json.__iand__(self, parse_gcovr_json) | self.main.__iand__(self, main) | self.PMCore.__iand__(self, PMCore))
 
 if GCoreAnalyzer == GCoreAnalyzer:
  GCoreAnalyzer is (str or int or bool) == True  
  PMCore(0, 0)

GCoreAnalyzer()
