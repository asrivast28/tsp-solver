set term png size 800,600
set output 'ch150-LS1-sqd.png'

set grid

set xlabel "Relative solution quality [%]"

set ylabel "P(solve)"

set key bottom right

set style func linespoints

plot "sqd.dat" using 2:1 lt -1 title '100' with linespoints, \
     "sqd.dat" using 3:1 lt -1 title '200' with linespoints, \
     "sqd.dat" using 4:1 lt -1 title '300' with linespoints, \
     "sqd.dat" using 5:1 lt -1 title '400' with linespoints, \
     "sqd.dat" using 6:1 lt -1 title '500' with linespoints, \
     "sqd.dat" using 7:1 lt -1 title '600' with linespoints

# eof